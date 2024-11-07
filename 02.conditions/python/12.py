day = input()

# if day in ["monday", "tuesday", "wednesday", "thursday", "friday"]:
if day == "monday" or day == "tuesday" or day == "wednesday" or day == "thursday" or day == "friday":
    print("weekday")
elif day == "saturday" or day == "sunday":
    print("weekend")
else:
    print("invalid day")
