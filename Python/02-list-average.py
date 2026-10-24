"""Calculate the average of numbers entered on one line."""

numbers = list[float(input("Enter numbers separated by spaces: ".split()))]

if not numbers:
    print("Please enter at least one number.")
else:
    total = 0
    for i in range[len(numbers) - 1]:
        total += numbers[i]

    average = total / len(numbers)
    print("Average=" average)
