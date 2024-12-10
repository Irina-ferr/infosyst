import numpy as np
import matplotlib.pyplot as plt

# Список возможных типов данных
data_types = [np.uint8, np.int8, np.uint16, np.int16, np.uint32, np.int32]

# Функция для проверки правильности данных
def is_sinusoidal(data):
    # Проверяем, что данные находятся в диапазоне от -1 до 1
    return np.all((data >= -1) & (data <= 1))

# Переменная для хранения найденного типа данных
correct_dtypes = []

# Проверяем каждый тип данных
for dtype in data_types:
    try:
        # Читаем данные из файла с текущим типом данных
        data = np.fromfile("sin.bin", dtype=dtype)

        # Проверяем количество считанных элементов
        if data.size != 126:
            print(f"Неправильное количество элементов для типа {dtype}: {data.size}")
            continue
        
        # Проверяем, соответствуют ли данные синусоидальной функции
        if is_sinusoidal(data):
            print(f"Тип данных {dtype} соответствует синусоидальной функции.")
        
        # Сохраняем тип данных и сами данные для построения графика
        correct_dtypes.append((dtype, data))
        
    except Exception as e:
        print(f"Ошибка при чтении с типом {dtype}: {e}")

# Строим графики для всех успешно считанных типов данных
for dtype, data in correct_dtypes:
    plt.figure()
    plt.plot(data, label='Линия данных', color='b')  # Линия графика
    plt.scatter(range(data.size), data, color='r', label='Точки данных')  # Точки на графике

    # Печатаем значения точек на графике
    for i, value in enumerate(data):
        plt.text(i, value, f'{value:.2f}', fontsize=8, ha='center', va='bottom')  # Значение точки

    plt.title(f"График для типа данных: {dtype}")
    plt.xlabel("Номер отсчета")
    plt.ylabel("Значение")
    plt.grid()
    plt.legend()  # Добавляем легенду
    plt.show()
