from random_list_generator import *
import sys
#-----------------------------------------------------------------------------
LOWER_BOUND = 1 
UPPER_BOUND = 10
NUM_ELEMENTS = 20

counter_array = [0] * (UPPER_BOUND - LOWER_BOUND + 1)
#-----------------------------------------------------------------------------
def counting_sort(array_to_sort):
    global counter_array
    
    for i in range(0, len(array_to_sort)):
        current_num = array_to_sort[i]
        counter_array[current_num - 1] += 1
    
    print("[", end="")
    for i in range(0, len(counter_array)):
        for _ in range(counter_array[i]):
            print(i + 1, end=", ")
    sys.stdout.write("\b")
    sys.stdout.write("\b")
    print("]")
#-----------------------------------------------------------------------------



random_array = random_list_generator(NUM_ELEMENTS, LOWER_BOUND, UPPER_BOUND)

print("Unsorted list is:")
print(random_array)

print("Sorted list is:")
counting_sort(random_array)
