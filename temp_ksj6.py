Vdef fibonacci_iterative(n):
    if n <= 0:
        return []
    elif n == 1:
        return [0]
    elif n == 2:
        return [0, 1]

    fib_sequence = [0, 1]
    while len(fib_sequence) < n:
        next_value = fib_sequence[-1] + fib_sequence[-2]
        fib_sequence.append(next_value)
    return fib_sequence

# Example usage
n = 10
print(fibonacci_iterative(n))  # Output: [0, 1, 1, 2, 3, 5, 8, 13, 21, 34]

