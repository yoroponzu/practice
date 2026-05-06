class Calc:
    def __init__(self, value):
        self.value = value

    def add(self, n):
        self.value += n
        return self   # ← 自分自身を返す

    def mul(self, n):
        self.value *= n
        return self

    def sub(self, n):
        self.value -= n
        return self

    def show(self):
        print(self.value)
        return self


# 使用例
a = Calc(10)

a.add(5).mul(3).sub(4).show()