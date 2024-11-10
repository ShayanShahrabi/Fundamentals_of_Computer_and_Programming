import random

def random_list_generator(array_size:int, lower_bound:int, upper_bound:int):
    array = []
    for i in range(array_size):
        array.append(random.randint(lower_bound, upper_bound))
    return array