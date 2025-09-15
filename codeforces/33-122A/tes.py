lucky_numbers = []

def generate(cur, n):
    if cur != "" and int(cur) <= n:
        lucky_numbers.append(int(cur))
    if cur == "" or int(cur) <= n:
        generate(cur + "4", n)
        generate(cur + "7", n)

n = 1000
generate("", n)
print(sorted(lucky_numbers))


