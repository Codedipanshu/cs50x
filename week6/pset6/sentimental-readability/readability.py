# TODO: readability

from cs50 import get_string


def main():
    # Getting input from user
    text = get_string("Text: ")

    # Assigning counting
    letters = count_letters(text)
    words = count_words(text)
    sentences = count_sentences(text)

    # calculating per 100 words
    L = letters / words * 100
    S = sentences / words * 100

    # Coleman-Liau index formula
    index = 0.0588 * L - 0.296 * S - 15.8

    # roundoff index
    n = round(index)

    # printing results
    if n > 1 and n < 16:
        print(f"Grade {n}")
    elif n <= 1:
        print("Before Grade 1")
    elif n >= 16:
        print("Grade 16+")

# counting letters


def count_letters(text):
    count = 0
    for i in range(len(text)):
        if (text[i].isalpha()):
            count += 1
    return count

# counting words


def count_words(text):
    count = 1
    for i in range(len(text)):
        if (text[i] == ' '):
            count += 1
    return count

# counting sentences


def count_sentences(text):
    count = 0
    for i in range(len(text)):
        if (text[i] == '.') or (text[i] == '!') or (text[i] == '?'):
            count += 1
    return count


# executing main
if __name__ == "__main__":
    main()