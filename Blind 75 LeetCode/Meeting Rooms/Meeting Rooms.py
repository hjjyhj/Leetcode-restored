class Solution:
    def canAttendMeetings(self, intervals: List[List[int]]) -> bool:
        intervals.sort()
        if len(intervals) == 0:
            return True
        total = intervals[0]
        for i in range(1, len(intervals), 1):
            if (total[0] < intervals[i][0] and total[1] > intervals[i][1]
               or total[0] < intervals[i][1] and total[1] > intervals[i][1]  
               or total[0] < intervals[i][0] and total[1] > intervals[i][0]):
                return False
            total[1] = intervals[i][1]
        return True
    
    #(10,30) (15 25)
    # (10, 30), (9, 11)
    #(10, 30), (25, 35)