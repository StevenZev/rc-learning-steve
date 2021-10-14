---
title: Conditionals 
toc: true
type: book
draft: false
weight: 40
---

Now that we understand the basic types, we can begin to study the fundamental programming constructs that all programs will use.  The two most important of these are _conditionals_ and _loops_.

## Conditionals

Computer programs really can't do all that many things.  They can

* assign values to variables (memory locations)
* make decisions based on comparisons
* repeat a sequence of instructions over and over
* call subprograms

Decisions (conditionals) are one of these basic constructs.

### Branching

When a program makes a decision, it is said to _branch_.  A program may be regarded as a tree with one root and many branches.  Executing the program causes the branches to be followed in a particular order.

##### Python If/Else

Most languages branch with some variant of 

if (something that evalutes to True or False) do something
else if (comparison) do some other things
else do some default things

Only the `if` is required; the other statements are optional.  The specific syntax in Python is

```python
if some_condition:
    code block
elif another_condition:
    code block
else:
    code block
```

Observe the colons and the indentation.  To terminate the conditional, return to the same indentation level as the initial `if`.

If the "code block" consists of a single statement, it is permissible to write it on the same line as the if or elif

```python
if x==0: z=0
```

Conditionals may be nested 

```python
if some_condition:
    if another_condition:
        do_something
    else:
        do_something_else
elif condition2:
    if something:
        do_work
```

Some languages have a "case" or "switch" statement for a long sequence of options.  Python has no such construct so we use a series of `elif`s.

```python
if cond1:
    block1
elif cond2:
    block2
elif cond3:
    block3
elif cond4:
    block4
else:
    final choice
```

The "condition" must be an expression that evaluates to True or False; that is, it must be a Boolean variable or expression.  Boolean expressions are formed from other types of variables with conditional operators.

<details>
<summary>Exercise 6</summary>

The Body Mass Index is a widely-used number to classify body shapes.  The formula in Imperial units (pounds, inches) is

BMI=weight\*703.1/height\*\*2

In metric units (kg, m) the formula is

BMI=weight/height\*\*2

The categories are as follows (we have omitted the top two):

Under 18.5: underweight
18.5 to 25: normal 
over 25 to 30: overweight
over 30 to 35: obese class I
over 35 to 40: obese class II
over 40 to 45: obese class III
over 45: obese class IV (morbidly obese)

Using whichever unit system you prefer, write some code to assign the weight and height, compute the number, and determine its classification.  Assign your own weight and height.  Try a few others.  Use an online calculator to check your results.

</details>
