"""Check whether a word or phrase is a palindrome."""

text = input("Enter a word or phrase: ")
cleaned = "".join(char.lower() for char in text if char.isalnum())
is_palindrome = True

for i in range(len(cleaned) // 2):
    if cleaned[i] != cleaned[len(cleaned) - i-1]:
        is_palindrome = False
        break

if is_palindrome:
    print("Palindrome")
else:
    print("Not a palindrome")
