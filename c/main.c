#include <Python.h>

int count_prime_number(int lower, int upper) {
    if (lower < 2) lower = 2;
    int cnt = upper - lower;
    for (int i = lower; i < upper; i++) {
        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                cnt -= 1;
                break;
            }
        }
    }
    return cnt;
}

static PyObject *findPrimes(PyObject *self, PyObject *args) {
    int num1, num2, cnt;
    if (!PyArg_ParseTuple(args, "ii", &num1, &num2)) return NULL;

    cnt = count_prime_number(num1, num2);
    return PyLong_FromLong(cnt);
}

static PyObject *version(PyObject *self) {
    return Py_BuildValue("s", "Version 0.01");
}

static PyMethodDef Examples[] = {
        {"findPrimes", findPrimes,            METH_VARARGS, "범위 안에서 소수가 몇 개인지 판별하는 함수"},
        {"version",    (PyCFunction) version, METH_NOARGS,  "버전을 반환하는 함수"},
        {NULL, NULL, 0, NULL}
};

static struct PyModuleDef Example = {
        PyModuleDef_HEAD_INIT,
        "Example",
        "findPrime Module",
        -1, // global state
        Examples
};

//INITIALIZER FUNCTION
PyMODINIT_FUNC PyInit_Example(void) {
    return PyModule_Create(&Example);
}