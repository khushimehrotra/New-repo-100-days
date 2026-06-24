def determine_gender(username):
    distict_count = len(set(username))
    if distict_count % 2 == 0:
        return "CHAT WITH HER!"
    else:
        return "IGNORE HIM!"
    
username = input("Enter the username:")
print(determine_gender(username))