import numpy as np
import matplotlib.pyplot as plt   

# Чтение данных из текстового файла
data_txt = np.loadtxt('ФПГ.txt')

# Построение графика
plt.figure(figsize=(10, 5))
plt.plot(data_txt, label='Фотоплетизмограмма', color='b')
plt.title('График фотоплетизмограммы из ФПГ.txt')
plt.xlabel('Время (с)')
plt.ylabel('Амплитуда')
plt.grid()
plt.legend()
plt.show()
  

# Пробуем разные форматы целых чисел
data_formats = [np.uint8, np.int8, np.uint16, np.int16, np.uint32, np.int32]

for fmt in data_formats:
    try:
        # Чтение данных из бинарного файла с заданным форматом
        data_bin = np.fromfile("ФПГ.dat", dtype=fmt)
        
        # Проверка на количество считанных элементов
        print(f"Формат: {fmt}, Количество элементов: {data_bin.size}")
        
        # Построение графика
        plt.figure(figsize=(10, 5))
        plt.plot(data_bin, label='Фотоплетизмограмма', color='r')
        plt.plot(data_txt, label='Фотоплетизмограмма', color='b')
        plt.title(f'График фотоплетизмограммы из ФПГ.dat с форматом {fmt}')
        plt.xlabel('Время (с)')
        plt.ylabel('Амплитуда')
        plt.grid()
        plt.legend()
        plt.show()
        
    except Exception as e:
        print(f"Ошибка при чтении с форматом {fmt}: {e}")
