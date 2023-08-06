class Solution:
    def finalString(self, s: str) -> str:
        l = len(s)
        x = ''
        for i in range(l):
            if s[i] == "i":
                x = ''.join(reversed(x))
            else:
                x = x + s[i]
        return(x)