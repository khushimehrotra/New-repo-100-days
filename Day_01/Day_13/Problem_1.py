class Solution(object):
    def mostCommonWord(self, paragraph, banned):
        """
        :type paragraph: str
        :type banned: List[str]
        :rtype: str
        """
        banned_set = set(banned)
        cleaned_chars = []
        for char in paragraph:
            if char.isalnum():
                cleaned_chars.append(char.lower())
            else:
                cleaned_chars.append(' ')

        cleaned_string = "".join(cleaned_chars)
        words = cleaned_string.split()

        word_counts = {}
        for word in words:
            if word not in banned_set:
                if word in word_counts:
                    word_counts[word]+=1
                else:
                    word_counts[word] = 1


        most_common = ""
        max_count = 0
        for word in word_counts:
            count = word_counts[word]
            if count > max_count:
                max_count = count
                most_common = word

            
        return most_common
        