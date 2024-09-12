class Solution:
    def asteroidsDestroyed(self, mass: int, asteroids: List[int]) -> bool:
        for aster in sorted(asteroids):
            if mass < aster:
                return False
            mass += aster

        return True