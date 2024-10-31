R, G, Y = 0, 0, 0

sticker = input()

# Count occurrences of 'R', 'G', and 'Y' based on each character in the string
for char in sticker:
    if char == 'Y':
        Y += 1
    elif char == 'G':
        G += 1
    else:  # Assume any other character is 'R'
        R += 1

# Determine output based on the conditions
if R >= 3 or (R >= 2 and Y >= 2) or G == 0:
    print("nakhor lite")
else:
    print("rahat baash")
