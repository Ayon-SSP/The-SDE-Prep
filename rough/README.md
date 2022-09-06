

| Algorithm                                                                                                                                       | Best Time Complexity | Average Time Complexity | Worst Time Complexity | Space Complexity |
| ----------------------------------------------------------------------------------------------------------------------------------------------- | -------------------- | ----------------------- | --------------------- | ---------------- |
| [Bubble Sort](./01.%20Bubble%20Sort)                                                                                                            | `Ω(n)`               | `Θ(n^2)`                | `O(n^2)`              | `O(1)`           |
| [Quicksort](./04.%20Quick%20Sort)                                                                                                               | `Ω(n log(n))`        | `Θ(n log(n))`           | `O(n^2)`              | `O(log(n))`      |
| [Mergesort](./05.%20Merge%20Sort)                                                                                                               | `Ω(n log(n))`        | `Θ(n log(n))`           | `O(n log(n))`         | `O(n)`           |
| Timsort                                                                                                                                         | `Ω(n)`               | `Θ(n log(n))`           | `O(n log(n))`         | `O(n)`           |
| [Heapsort](https://github.com/thepranaygupta/Data-Structures-and-Algorithms/tree/main/01.%20DataStructures/04.%20Tree/05.%20Heap#7---heap-sort) | `Ω(n log(n))`        | `Θ(n log(n))`           | `O(n log(n))`         | `O(1)`           |
| [Insertion Sort](./02.%20InsertionSort)                                                                                                         | `Ω(n)`               | `Θ(n^2)`                | `O(n^2)`              | `O(1)`           |
| [Selection Sort](./03.%20Selection%20Sort)                                                                                                      | `Ω(n^2)`             | `Θ(n^2)`                | `O(n^2)`              | `O(1)`           |
| Tree Sort                                                                                                                                       | `Ω(n log(n))`        | `Θ(n log(n))`           | `O(n^2)`              | `O(n)`           |
| Shell Sort                                                                                                                                     | `Ω(n log(n))`        | `Θ(n(log(n))^2)`        | `O(n(log(n))^2)`      | `O(1)`           |
| Bucket Sort                                                                                                                                    | `Ω(n+k)`             | `Θ(n+k)`                | `O(n^2)`              | `O(n)`           |
| [Radix Sort](./07.%20Radix%20Sort)                                                                                                          | `Ω(nk)`              | `Θ(nk)`                 | `O(nk)`               | `O(n+k)`         |
| [Counting Sort](./06.%20Count%20Sort)                                                                                                         | `Ω(n+k)`             | `Θ(n+k)`                | `O(n+k)`              | `O(k)`           |
| Cubesort                                                                                                                                        | `Ω(n)`               | `Θ(n log(n))`           | `O(n log(n))`         | `O(n)`           |


<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Table</title>
</head>
<body>
    <table border="2">
        <tr>
            <th colspan="4">Work Contact Points</th>
        </tr>
        <tr>
            <th>Name</th>
            <th>Email</th>
            <th>Phone</th>
            <th>Flore/Block</th>
        </tr>
        <tr>
            <td>Frend</td>
            <td>fred@megacrop.com</td>
            <td>123456</td>
            <td rowspan="2" align="center" >1/A</td>
        </tr>
        <tr>
            <td>Jhon</td>
            <td>Jhon@megacrop.com</td>
            <td>234567</td>
        </tr>
        <tr>
            <td bgcolor="yellow">Bill</td>
            <td bgcolor="skyblue">bill@megacrop.com</td>
            <td bgcolor="yellow">345678</td>
            <td rowspan="3" align="center" bgcolor="blue">3/C</td>
        </tr>
        <tr>
            <td bgcolor="skyblue">Jane</td>
            <td bgcolor="yellow">Jane@megacrop.com</td>
            <td bgcolor="skyblue">777444</td>
        </tr>
        <tr>
            <td bgcolor="yellow">Alison</td>
            <td bgcolor="skyblue">alison@megacrop.com</td>
            <td bgcolor="yellow">999652</td>
        </tr>
    </table>
    <span class="redcolors"></span>
</body>
</html>



<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Table</title>
    <link rel="preconnect" href="https://fonts.googleapis.com">
<link rel="preconnect" href="https://fonts.gstatic.com" crossorigin>
<link href="https://fonts.googleapis.com/css2?family=Ubuntu:wght@500&display=swap" rel="stylesheet">
    <style>
        table {
            border-collapse: collapse;
            width: 100%;
            font-family: 'Ubuntu', sans-serif;
        }
        th, td {
            text-align: left;
            padding: 8px;
            text-align: center;
        }
        tr:nth-child(even){background-color: #f2f2f2}
        th {
            background-color: rgb(185, 119, 255);
            color: white;
        }
        .redcolors {
            color: red;
        }
    </style>
</head>
<body>
    <table border="2" width="100%">
        <tr>
            <th rowspan="2">Algorithem</th>
            <th colspan="3">Time Complexity</th>
            <th rowspan="2">Worst Case space Complexity</th>
        </tr>
        <tr>
            <th>Best</th>
            <th>Average</th>
            <th>Worst</th>
        </tr>
        <tr>
            <td>Bubble Sort</td>
            <td>O(n)</td>
            <td>O(n^2)</td>
            <td>O(n^2)</td>
            <td>O(1)</td>
        </tr>
        <tr>
            <td>Selection Sort</td>
            <td>O(n^2)</td>
            <td>O(n^2)</td>
            <td>O(n^2)</td>
            <td>O(1)</td>
        </tr>
        <tr>
            <td>Insertion Sort</td>
            <td>O(n^2)</td>
            <td>O(n^2)</td>
            <td>O(n^2)</td>
            <td>O(1)</td>
        </tr>
        <tr>
            <td>Merge Sort</td>
            <td>O(n^2)</td>
            <td>O(n^2)</td>
            <td>O(n^2)</td>
            <td>O(1)</td>       
        </tr>
        <tr>
            <td>Quick Sort</td>
            <td>O(n^2)</td>
            <td>O(n^2)</td>
            <td>O(n^2)</td>
            <td>O(1)</td>
        </tr>
        <tr>
            <td>Heap Sort</td>
            <td>O(n^2)</td>
            <td>O(n^2)</td>
            <td>O(n^2)</td>
            <td>O(1)</td>
        </tr>
        <tr>
            <td>Count Sort</td>
            <td>O(n+k)</td>
            <td>O(n+k)</td>
            <td>O(n+k)</td>
            <td>O(k)</td>
        </tr>
        <tr>
            <td>Bucket Sort</td>
            <td>O(n+k)</td>
            <td>O(n+k)</td>
            <td>O(n^2)</td>
            <td>O(n)</td>
        </tr>
        <tr>
            <td>Radix Sort</td>
            <td>O(n*k)</td>
            <td>O(n*k)</td>
            <td>O(n*k)</td>
            <td>O(n+k)</td>
        </tr>

    </table>
    <span class="redcolors"></span>
</body>
</html>



