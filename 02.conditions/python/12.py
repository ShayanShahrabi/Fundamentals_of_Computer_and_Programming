day = input().strip().lower()  # Read input and normalize

if day in ["monday", "tuesday", "wednesday", "thursday", "friday"]:
    print("weekday")
elif day in ["saturday", "sunday"]:
    print("weekend")
else:
    print("invalid day")
