class Solution:
    def compress(self, chars: list[str]) -> int:
        ans = 0
        i = 0
        
        while i < len(chars):
            letter = chars[i]
            count = 0
            
            # Count the number of occurrences of the current character
            while i < len(chars) and chars[i] == letter:
                count += 1
                i += 1
            
            # Write the character to the 'ans' position
            chars[ans] = letter
            ans += 1
            
            # If count > 1, write the digits of the count
            if count > 1:
                for digit in str(count):
                    chars[ans] = digit
                    ans += 1
                    
        return ans
