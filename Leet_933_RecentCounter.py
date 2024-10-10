class RecentCounter:
    def __init__(self):
        self.queue = []

    def ping(self, t: int) -> int:
        self.queue.append(t)
        
        while self.queue[0] < t-3000: # t-3000보다 작으면 첫번째 인덱스 값 삭제
            del self.queue[0]

        return len(self.queue)


# Your RecentCounter object will be instantiated and called as such:
# obj = RecentCounter()
# param_1 = obj.ping(t)