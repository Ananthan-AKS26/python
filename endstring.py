firststring = input("Enter the string:")
if firststring.endswith("ing"):
        mod_string = firststring + "ly"
else:
        mod_string = firststring + "ing"
print ("Modified string:",mod_string)
