def Even_PerfectSq(start,end):
    evensq = []
    for num in rande(start,end + 1):
        if all(int(digit) % 2 == 0
            for digit in str(num)):
                sqrt=int (num ** 0.5)
                if sqrt * sqrt == num:
                     evenSq.append(num)
    return evenSq
