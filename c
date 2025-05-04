<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Colorful Calculator</title>
  <style>
    body {
      font-family: 'Arial', sans-serif;
      background-color: #f0f0f0;
      display: flex;
      justify-content: center;
      align-items: center;
      height: 100vh;
      margin: 0;
    }

    h1 {
      text-align: center;
      color: #333;
    }

    #calculator {
      background-color: #ffffff;
      border-radius: 10px;
      box-shadow: 0 4px 10px rgba(0, 0, 0, 0.1);
      padding: 20px;
      display: grid;
      grid-template-columns: repeat(4, 1fr);
      gap: 10px;
      width: 250px;
    }

    button {
      font-size: 1.5rem;
      padding: 20px;
      border: none;
      border-radius: 10px;
      cursor: pointer;
      transition: background-color 0.3s, transform 0.3s;
    }

    button:hover {
      transform: scale(1.1);
    }

    #display {
      grid-column: span 4;
      font-size: 2rem;
      padding: 10px;
      text-align: right;
      background-color: #333;
      color: white;
      border-radius: 10px;
      border: none;
    }

    /* Colorful button styles */
    .number {
      background-color: #ff8c00;
      color: white;
    }

    .number:hover {
      background-color: #ff5e00;
    }

    .operator {
      background-color: #007bff;
      color: white;
    }

    .operator:hover {
      background-color: #0056b3;
    }

    .action {
      background-color: #28a745;
      color: white;
    }

    .action:hover {
      background-color: #218838;
    }

    .equal {
      background-color: #dc3545;
      color: white;
      grid-column: span 2;
    }

    .equal:hover {
      background-color: #c82333;
    }

  </style>
</head>
<body>
  <div id="calculator">
    <input type="text" id="display" disabled>
    <button class="number" onclick="appendNumber('1')">1</button>
    <button class="number" onclick="appendNumber('2')">2</button>
    <button class="number" onclick="appendNumber('3')">3</button>
    <button class="operator" onclick="appendNumber('+')">+</button>
    <button class="number" onclick="appendNumber('4')">4</button>
    <button class="number" onclick="appendNumber('5')">5</button>
    <button class="number" onclick="appendNumber('6')">6</button>
    <button class="operator" onclick="appendNumber('-')">-</button>
    <button class="number" onclick="appendNumber('7')">7</button>
    <button class="number" onclick="appendNumber('8')">8</button>
    <button class="number" onclick="appendNumber('9')">9</button>
    <button class="operator" onclick="appendNumber('*')">*</button>
    <button class="number" onclick="appendNumber('0')">0</button>
    <button class="action" onclick="clearDisplay()">C</button>
    <button class="equal" onclick="calculateResult()">=</button>
    <button class="operator" onclick="appendNumber('/')">/</button>
  </div>

  <script>
    let display = document.getElementById('display');
    let currentInput = '';

    function appendNumber(number) {
      currentInput += number;
      display.value = currentInput;
    }

    function clearDisplay() {
      currentInput = '';
      display.value = '';
    }

    function calculateResult() {
      try {
        currentInput = eval(currentInput).toString();
        display.value = currentInput;
      } catch {
        display.value = 'Error';
        currentInput = '';
      }
    }
  </script>
</body>
</html>
