from pyswarm import pso

def minimise(x):
    x1 = x[0]
    x2 = x[1]
    return x1 - x2

def constraints_cant_go_negative(x):
    x1 = x[0]
    x2 = x[1]
    return [0]

lb = [-3, -1]
ub = [2, 60]

xopt, fopt = pso(minimise, lb, ub, f_ieqcons=constraints_cant_go_negative)

print(xopt, fopt)