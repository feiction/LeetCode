# not good. see cpp solution
def isAnagram(s: str, t: str) -> bool:
    chars = dict()
    for char in s:
        if char in chars:
            chars[char] += 1
        else:
            chars[char] = 1
    for char in t:
        if char not in chars:
            return False
        else:
            chars[char] -= 1
            if chars[char] == 0:
                chars.pop(char)
    if not chars:
        return True
    return False
