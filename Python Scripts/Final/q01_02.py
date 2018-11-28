import math


quantities = [
    25, 67, 28, 4, 67, 61, 73,
    27, 12, 46, 97, 10, 40, 19,
    60, 99, 94, 5, 77, 8, 12,
    51, 13, 5, 69, 12, 34, 57,
    79, 18, 10, 53, 97, 28, 26, 82
]

total_sum = sum(quantities)
count = len(quantities)
mean = round(total_sum / count, 2)

differences = [x - mean for x in quantities]
square_differences = [d ** 2 for d in differences]
sum_of_square_differences = sum(square_differences)
variance = sum_of_square_differences / count
standard_deviation = round(math.sqrt(variance), 2)

min_quantity = min(quantities)
max_quantity = max(quantities)

percentile_25 = len([i for i in quantities if i <= 25]) / count * 100
percentile_25 = round(percentile_25, 2)
percentile_50 = len([i for i in quantities if i <= 50]) / count * 100
percentile_50 = round(percentile_50, 2)
percentile_75 = len([i for i in quantities if i <= 75]) / count * 100
percentile_75 = round(percentile_75, 2)

print('Count:', count)
print('Mean:', mean)
print('Standard Deviation:', standard_deviation)
print('Min:', min_quantity)
print('Max:', max_quantity)
print('25th percentile:', percentile_25)
print('50th percentile:', percentile_50)
print('75th percentile:', percentile_75)
