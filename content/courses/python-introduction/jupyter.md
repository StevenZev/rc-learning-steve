---
title: Jupyterlab 
toc: true
type: docs
draft: false
weight: 12

menu:
    python-introduction:
        parent: Introduction to Programming in Python
        weight: 12
---

We will begin with Jupyterlab. Select the Jupyterlab icon in the Anaconda Navigator.  
Launching it will cause a tab to open in your Web browser. 
When Jupyterlab starts up, you will see a list of your files on the left and three icons to select the mode.  Jupyterlab incorporates a Jupyter notebook server as well as a plain Python console and a simple text editor.  We want to start a Jupyter notebook so click on the top tile.

![JupyterLabSetup](/courses/python-introduction/imgs/JupyterLabSetup.png)

A textbox will open.

![JupyterLabInput](/courses/python-introduction/imgs/JupyterLabInput.png)

Your notebook is untitled.  Open the File menu and click Rename.  Name your notebook `hello.ipynb`, then click the Rename button.

![JupyterLabRename](/courses/python-introduction/imgs/JupyterLabRename.png)

## Cells

The blank line with the blinking cursor is a cell.  You can type code into the cell.  After the `In[]` prompt type `print("Hello")`
To execute the cell click the arrowhead, or type the `shift+enter` keys together.

## Your First Program

If you are using Python 2.7 please begin all your programs with the line
`from __future__ import print_function`
The symbols surrounding `future` are double underscores.

Type the following lines into a cell.

```python
Numerals=list(range(1,11))
print(Numerals[3])
print(Numerals[:3])
print(Numerals[3:])
print(Numerals[4:6])
```

Run this cell.  Is the result what you expected?

Now add lines

```python
Numerals.extend(list(range(11,21)))
Numerals[3]=11
del Numerals[4]
print(Numerals)
len(Numerals)
```

### Some Strings

In a new cell Type

```python
greeting="Hello World"
hello=greeting[0:5]
greeting2=hello+" there"
output=greeting2+"\n"*2
```

The symbol `\n` stands for "new line."  Run this cell.  In a new cell type

```python
output
```

Run cell.  then

```python
print(output)
```

When you are working directly at the interpreter, you can type a variable and it will print the value.  This is called _expression evaluation_.  Using the `print` function observes any formatting.

## Text Editor

JupyterLab includes a simple text editor you can use to create files.  In the upper left of your JupyterLab tab, click `+` to start the launcher. Choose the text editor. Type

```python
def hello():
    print("Hello")
    return None
hello()
```

Be sure to indent lines exactly as shown, and to return completely to the margin for `hello()`. Select your text. From the Editor menu select Language.  Scroll (far) down to Python.  You will now enable syntax coloring for this file.  From the File menu choose Save As. Name the file `hello_func.py`  By default, files will be saved into the folder in which JupyberLab is working. The default is your "User" directory.  After saving the file, return to your Jupyter notebook page and type

```python
import hello_func
```

Then run the cell.

## Exporting your Notebook

### Exporting to a Script

You can export embedded text in your notebook into a script.  First make sure your notebook has a name.  If you have not named your current notebook yet, call it `first_script.ipynb`.  From the Notebook menu find Export To->Executable Script.  Save the script in the usual way from your browser.  If it is in `Downloads` move it to a location of your choice.  You can make a new directory for your Python scripts if you wish.

### Exporting to Other Formats

If you have installed Anaconda on your local computer, other export options are available to you.  PDF, HTML, and Markdown are popular formats.  These are not all available for Rivanna Open OnDemand users due to the need for certain translation software, but exporting can be done from the command line.  See the [documentation](https://www.rc.virginia.edu/userinfo/howtos/rivanna/convert-jupyter-pdf/) for more information.

## Plotting in JupyterLab

In JupyterLab, open a new notebook with the `+` icon. Type
```python
import matplotlib.pylab as plt
```
Run the cell. In a new cell type
```python
x=plt.arange(-1.,1.1,.1)
y=1./plt.sqrt(x**2+1)
```
Execute the cell.  In the next cell type
```python
plt.plot(x,y)
```
Jupyterlab no longer requires it, but sometimes you need to add one more line, which should be in the same cell as the plot command.
```python
plt.show()
```

## Resources

Several tutorials are available for Jupyter and Jupyterlab online.  One good one is [here](https://www.tutorialspoint.com/jupyter/index.htm).