a=input("Enter your name: ")
b=input("Enter Date: ")
letter = '''Dear <|NAME|>,
           You are selected!
           <|DATE|>'''
letter= letter.replace("<|NAME|>",a)
letter= letter.replace("<|DATE|>",b)
print(letter)