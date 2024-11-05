num_base_10 = int(input())
desired_base = int(input())

result_reversed = ""

while(num_base_10 != 0):  # calculate the reverse of result
    result_reversed += str(num_base_10 % desired_base)

    num_base_10 = num_base_10 // desired_base

# print the actual result
print(result_reversed[::-1])
    