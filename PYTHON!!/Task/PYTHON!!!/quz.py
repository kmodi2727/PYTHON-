def load_quiz():
    """Loads quiz data from a file."""
    try:
        with open('quiz_data.txt', 'r') as f:
            data = f.read()
            if not data:
                return {}
            quiz = eval(data)  # Safe in this controlled context
            return quiz
    except FileNotFoundError:
        return {}
    except SyntaxError:
        return {}

def save_quiz(quiz):
    """Saves quiz data to a file."""
    with open('quiz_data.txt', 'w') as f:
        f.write(str(quiz))

def add_question(quiz):
    """Adds a question to the quiz."""
    q_id = input("Enter Question ID: ")
    question = input("Enter Question: ")
    options = [input(f"Option {i+1}: ") for i in range(4)]
    while True:
        correct = input("Correct Answer (1-4): ")
        if correct in ['1', '2', '3', '4']:
            break
        else:
            print("Invalid input. Please enter 1, 2, 3, or 4.")
    quiz[q_id] = {'question': question, 'options': options, 'correct': correct}
    save_quiz(quiz)
    print("Question added!")

def view_questions(quiz):
    """Displays all questions in the quiz."""
    if not quiz:
        print("No questions.")
        return
    for q_id, q in quiz.items():
        print(f"\nID: {q_id}, Question: {q['question']}")
        for i, opt in enumerate(q['options']):
            print(f"{i+1}. {opt}")
        print(f"Correct: {q['correct']}")

def delete_question(quiz):
    """Deletes a question from the quiz."""
    q_id = input("Question ID to delete: ")
    if q_id in quiz:
        confirm = input(f"Delete {q_id}? (y/n): ").lower()
        if confirm == 'y':
            del quiz[q_id]
            save_quiz(quiz)
            print("Deleted!")
        else:
            print("Cancelled.")
    else:
        print("Question not found.")

def run_quiz(quiz):
    """Runs the quiz."""
    if not quiz:
        print("No questions to play.")
        return
    score = 0
    for q_id, q in quiz.items():
        print(f"\n{q['question']}")
        for i, opt in enumerate(q['options']):
            print(f"{i+1}. {opt}")
        while True:
            answer = input("Your answer (1-4): ")
            if answer in ['1', '2', '3', '4']:
                break
            else:
                print("Invalid input. Please enter 1, 2, 3, or 4.")

        if answer == q['correct']:
            score += 1
            print("Correct!")
        else:
            print(f"Wrong! Correct: {q['correct']}")
    print(f"\nScore: {score}/{len(quiz)}")

def main():
    quiz = load_quiz()

    while True:
        print("\n1. Quiz Master")
        print("2. Quiz Cracker")
        print("3. Exit")
        choice = input("Choice: ")

        if choice == '1':
            while True:
                print("\n1. Add Question")
                print("2. View Questions")
                print("3. Delete Question")
                print("4. Back")
                master_choice = input("Choice: ")
                if master_choice == '1':
                    add_question(quiz)
                elif master_choice == '2':
                    view_questions(quiz)
                elif master_choice == '3':
                    delete_question(quiz)
                elif master_choice == '4':
                    break
                else:
                    print("Invalid.")
        elif choice == '2':
            run_quiz(quiz)
        elif choice == '3':
            print("Bye!")
            break
        else:
            print("Invalid.")

if __name__ == "__main__":
    main()