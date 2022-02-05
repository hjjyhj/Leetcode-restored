class Solution:
    def minMeetingRooms(self, intervals: List[List[int]]) -> int:
        start, end = [], []
        
        for i in range(len(intervals)):
            start.append(intervals[i][0])
            end.append(intervals[i][1])
        start.sort()
        end.sort()
        res, count = 0, 0
        s, e = 0, 0
        
        while s < len(intervals):
            if start[s] < end[e]:
                s += 1
                count += 1
            else:
                e += 1
                count -= 1
            res = max(res, count)
        return res