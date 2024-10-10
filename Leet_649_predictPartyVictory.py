class Solution:
    def predictPartyVictory(self, senate: str) -> str:
        queue = [True if i=='R' else False for i in senate]

        while (not queue[0]) in queue:
            queue.remove(not queue[0])
            queue.append(queue.pop(0))

        return 'Radiant' if queue[0] else 'Dire'