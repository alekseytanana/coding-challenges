class ExtendedStack(list):
    def sum(self):
        self.append(self.pop() + self.pop())

    def sub(self):
        self.append(self.pop() - self.pop())

    def mul(self):
        self.append(self.pop() * self.pop())

    def div(self):
        self.append(self.pop() // self.pop())

    # def sum(self):
    #     self[-2:] = [self[-1] + self[-2]]
    # 
    # def sub(self):
    #     self[-2:] = [self[-1] - self[-2]]
    # 
    # def mul(self):
    #     self[-2:] = [self[-1] * self[-2]]
    # 
    # def div(self):
    #     self[-2:] = [self[-1] // self[-2]]