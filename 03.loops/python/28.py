base = int(input())
number_base_input = int(input())

number_base_10 = 0  # final result
power = 0  

while(number_base_input > 0):  # convert `number_base_input` to base 10 
    number_base_10 += (number_base_input % 10) * (base ** power)
    power += 1
    number_base_input = number_base_input // 10

print(number_base_10)