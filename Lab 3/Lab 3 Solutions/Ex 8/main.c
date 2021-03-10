/*
 * Exercise 8 - Short-Circuit Evaluation
 *
 * Author: Christian Grévisse
 * Date: 26.02.2018
 */

#include<stdio.h>

int foo() {
	printf("foo() is called!\n");
	return 1;
}

void experiment(int a, int b) {
	printf("--- EXPERIMENT with a = %3d and b = %3d ---\n", a, b);
	if((a < 0 && ++b > 0) || foo()) {
		printf("b = %d\n", b);
	}
	printf("-------------------------------------------\n\n");
}

int main() {

	/*
	 * Experiment 1
	 *
	 * In the first experiment, the condition a < 0 is false, as 42 is positive.
	 * Thus, the second operand of the && operator does not need to be evaluated anymore,
	 * as the value of the && expression will evaluate to false anyway (short-circuit!).
	 * This means that b does not get incremented and keeps the value 0.
	 *
	 * As the whole && expression evaluates to false, the || operator cannot yet conclude
	 * on the value and has to evaluate its second operand, which is the call to the foo()
	 * function. Latter returns 1, so the whole condition of the if-statement is finally true.
	 * The branch thus gets executed and the output states that foo() is called and that b = 0.
	 */
	experiment(42, 0);

	/*
	 * Experiment 2
	 *
	 * In the second experiment, the condition a < 0 evaluates to true, as -1 is negative.
	 * The && operator cannot yet conclude, so it needs to execute its second operand, which
	 * increments at first the value of b, becoming 1. Then, b > 0 evaluates to true, too, as
	 * 1 is positive. The && expression evaluating in total to true, the || operator does not need
	 * to evaluate its second operand anymore, as the value of the || expression will evaluate to
	 * true anyway (short-circuit!). This means that this time, foo() is not called. The value of
	 * the || expression being true, the branch gets executed, and the output only states that b = 1.
	 */
	experiment(-1, 0);

    return 0;
}
