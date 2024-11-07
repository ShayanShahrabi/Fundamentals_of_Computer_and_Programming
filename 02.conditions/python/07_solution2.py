R, G, Y = 0, 0, 0

label = input()

# Count occurrences of 'R', 'G', and 'Y' based on each character in the string
if label[0] == 'Y':
    Y += 1
elif label[0] == 'G':
    G += 1
elif label[0] == 'R':
    R += 1

if label[1] == 'Y':
    Y += 1
elif label[1] == 'G':
    G += 1
elif label[1] == 'R':
    R += 1

if label[2] == 'Y':
    Y += 1
elif label[2] == 'G':
    G += 1
elif label[2] == 'R':
    R += 1

if label[3] == 'Y':
    Y += 1
elif label[3] == 'G':
    G += 1
elif label[3] == 'R':
    R += 1

if label[4] == 'Y':
    Y += 1
elif label[4] == 'G':
    G += 1
elif label[4] == 'R':
    R += 1

# Determine output based on the conditions
if R >= 3:
    print("nakhor lite")
elif (R >= 2 and Y >= 2):
    print("nakhor lite")
elif G == 0:
    print("nakhor lite")
else:
    print("rahat baash")
