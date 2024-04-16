def length (str):
    counter = 0

    for i in str:
        counter += 1
    return counter

t,a,b = input().split()

while (t  != "\n" or a != "\n" or b != "\n"):
    t = int(t)
    a = int(a)
    b = int(b)

    div = str(((t ** a) - 1) / ((t**b) - 1))
    divString = str(div)
    if (length(divString) > 100):
        print("is not an integer with less than 100 digits")
    else:
        print(f"({t}^{a}-1)/({t}^{b}-1) {int(div)}")
    t,a,b = input().split()
