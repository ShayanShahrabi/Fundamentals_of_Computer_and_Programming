R, G, Y = 0, 0, 0

sticker = input()

# Count the occurrences of 'R', 'G', and 'Y' in the sticker string
for char in sticker:
    if char == 'Y':
        Y += 1
    elif char == 'G':
        G += 1
    elif char == 'R':
        R += 1

# Determine the output based on the counts
if (R >= 3) or (R >= 2 and Y >= 2) or (G == 0):
    print("nakhor lite")
else:
    print("rahat baash")
