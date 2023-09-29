// Esta es la rama de prefijos locos
#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

#define K 30

int cima = -1;
int pila[K] = {};





void push(int el) {
    if (cima == K - 1) {
        cout << "Pila llena" << endl;
    } else {
        cima += 1;
        pila[cima] = el;
    }
}



int pop() {
    if (cima == -1) {
        cout << "Pila vacia" << endl;
        return 0;
    } else {
        return pila[cima--];
    }
}



int priority(char alpha) {
    if (alpha == '+' || alpha == '-')
        return 1;
    if (alpha == '*' || alpha == '/')
        return 2;
    return 0;
}



string infixToPrefix(string infix) {
    int b = strlen(infix.c_str());
    char prefix[b * 2];
    int j = 0;

    for (int i = b - 1; i >= 0; i--) {
        char current = infix[i];
        if (current == ' ') {
            continue;
        } else if (isdigit(current)) {
            string operand;
            while (i >= 0 && (isdigit(infix[i]) || infix[i] == '.')) {
                operand = infix[i] + operand;
                i--;
            }
            i++;
            for (char c : operand) {
                prefix[j++] = c;
            }
            prefix[j++] = ' ';
        } else if (current == '(') {
            while (cima != -1 && pila[cima] != ')') {
                prefix[j++] = pop() + '0';
                prefix[j++] = ' ';
            }
            pop();
        } else {
            while (cima != -1 && priority(pila[cima] + '0') >= priority(current)) {
                prefix[j++] = pop() + '0';
                prefix[j++] = ' ';
            }
            push(current - '0');
        }
    }

    while (cima != -1) {
        prefix[j++] = pop() + '0';
        prefix[j++] = ' ';
    }

    prefix[j] = '\0';

    return string(prefix);
}



int evaluatePrefix(string prefix) {
    int b = strlen(prefix.c_str());
    int result = 0;

    for (int i = b - 1; i >= 0; i--) {
        char current = prefix[i];
        if (isdigit(current)) {
            int operand = 0;
            while (i >= 0 && isdigit(prefix[i])) {
                operand = operand * 10 + (prefix[i] - '0');
                i--;
            }
            i++;
            push(operand);
        } else if (current != ' ') {
            int operand1 = pop();
            int operand2 = pop();
            switch (current) {
                case '+':
                    push(operand1 + operand2);
                    break;
                case '-':
                    push(operand1 - operand2);
                    break;
                case '*':
                    push(operand1 * operand2);
                    break;
                case '/':
                    push(operand1 / operand2);
                    break;
            }
        }
    }

    result = pop();
    return result;
}



int main() {
    string infixExpression = "2 + (12/3)";
	cout << "Expresion original: " << infixExpression << endl;

	// ------------------------------------------------------------
    string prefixExpression = infixToPrefix(infixExpression);
    cout << "Expresion en notacion prefija: " << prefixExpression << endl;
	system("pause");

    int result = evaluatePrefix(prefixExpression);
    cout << "Resultado: " << result << endl << endl ;


    return 0;
}




