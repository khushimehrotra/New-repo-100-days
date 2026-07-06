def card_game_scores(cards):
    left = 0
    right = len(cards) - 1
    score_1 = 0
    score_2 = 0
    player_1_turn = True
    while left <= right:
        if cards[left] > cards[right]:
            chosen_card = cards[left]
            left +=1
        else:
            chosen_card = cards[right]
            right -=1
        if player_1_turn:
            score_1 += chosen_card
        else:
            score_2 += chosen_card
        #alternate turns between player 1 and player 2
        player_1_turn = not player_1_turn

    return score_1, score_2

print(card_game_scores([4, 1, 2, 10]))
print(card_game_scores([1, 2, 4, 5, 6]))
