_This project has been created as part of the 42 curriculum by fconde-p._

# Description

This project intends to put to practice a few algorithmic concepts in order to create a sort machine for integer numbers. Of course, here in 42sp we do not get things so easily. So, for this project, we must use a fer commands restricting the movements we can do. They are:

- **sa (swap a)**: Swap the first 2 elements at the top of stack a. Do nothing if there is only one element or none.
- **sb (swap b)**: Swap the first 2 elements at the top of stack b. Do nothing if there is only one element or none.
- **ss** : sa and sb at the same time.
- **pa (push a)**: Take the first element at the top of b and put it at the top of a. Do nothing if b is empty.
- **pb (push b)**: Take the first element at the top of a and put it at the top of b. Do nothing if a is empty.
- **ra (rotate a)**: Shift up all elements of stack a by 1. The first element becomes the last one.
- **rb (rotate b)**: Shift up all elements of stack b by 1. The first element becomes the last one.
- **rr** : ra and rb at the same time.
- **rra (reverse rotate a)**: Shift down all elements of stack a by 1. The last element becomes the first one.
- **rrb (reverse rotate b)**: Shift down all elements of stack b by 1. The last element becomes the first one.
- **rrr** : rra and rrb at the same time.



# Instructions

To compile, use the `make` comand.
To clean the objects created, do a `make clean`.
To clean the objects created and the executable, do a `make fclean`.
To run the binary, please, provide a list of integer numbers.

Note that 42 asks us to use bash. So, if you are trying to do something like pass the arguments list by a shell variable such as `ARGS="1 5 -43 0 -8934` and do a `./push_swap $ARGS` the zsh interpreter will understand the ARGS content as a string while bash, the default interpreter for shell here, will take the list as a bunch of independent variables.

# Resources

We have a checker for this project with the subject. But ig you want a nice and visual tool that also generates the integer list itself, take a look at [Eliot Lucas' project](https://push.eliotlucas.ch/).
About AI, it was used as a tool to check some hipotesis and improve the logic giving explanations about the project, beeing a few times as a pair programmer with me and other times as a consultant to new concepts.