while True:
    print("Если введете ноль в поле ввода знака, то программа завершит работу. ")
    s = input("Знак (+,-,*,/): ")
    if s == "0": break
    if s in ("+", "-", "*", "/"):
        x = float(input("x="))
        y = float(input("y="))
        if s == "+":
            print("%.2f" % (x+y))
        elif s == "-":
            print("%.2f" % (x-y))
        elif s == "*":
            print("%.2f" % (x*y))
        elif s == "/":
            if int(y) != 0:
                print("%.2f" % (x/y))
            else:
                print("Деление на 0!")
        else:
                print("Неверный знак операции")
    print("Хотите продолжить?")
