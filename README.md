<h1>🏗️ Concrete Material Estimator</h1>

<p>This is a C++ program that estimates the quantity of construction materials required for different types of concrete structures such as walls, slabs, and beams based on volume and concrete mix ratios.</p>

<h2>🚀 Features</h2>
<ul>
  <li>Supports structure types: <strong>Wall</strong>, <strong>Slab</strong>, and <strong>Beam</strong></li>
  <li>Supports common concrete mix types: <code>M15</code>, <code>M20</code>, <code>M25</code>, <code>M30</code>, <code>M40</code></li>
  <li>Calculates:
    <ul>
      <li>Number of bricks (for walls)</li>
      <li>Cement bags</li>
      <li>Sand volume</li>
      <li>Aggregate volume</li>
      <li>Steel weight</li>
      <li>Total volume of materials</li>
    </ul>
  </li>
  <li>Menu-driven interface with looped interaction</li>
  <li>Input validation and error handling</li>
</ul>

<h2>📦 Requirements</h2>
<ul>
  <li>C++ Compiler (e.g. g++, Code::Blocks, or any IDE with C++ support)</li>
</ul>

<h2>💻 How to Run</h2>
<ol>
  <li>Save the code as <code>material_estimator.cpp</code></li>
  <li>Compile the program:
    <pre><code>g++ material_estimator.cpp -o estimator</code></pre>
  </li>
  <li>Run the executable:
    <pre><code>./estimator</code></pre>
  </li>
</ol>

<h2>📐 Concrete Mix Types</h2>
<table border="1" cellpadding="8" cellspacing="0">
  <tr>
    <th>Mix Type</th>
    <th>Cement : Sand : Aggregate</th>
    <th>Bricks per m³ (for walls)</th>
  </tr>
  <tr><td>M15</td><td>1 : 2 : 4</td><td>500</td></tr>
  <tr><td>M20</td><td>1 : 1.5 : 3</td><td>550</td></tr>
  <tr><td>M25</td><td>1 : 1 : 2</td><td>600</td></tr>
  <tr><td>M30</td><td>1 : 0.75 : 1.5</td><td>650</td></tr>
  <tr><td>M40</td><td>1 : 0.5 : 1</td><td>700</td></tr>
</table>

<h2>📊 Calculation Formulae</h2>
<ul>
  <li><strong>Cement Bags</strong>: <code>(cementRatio / totalRatio) * volume * 1440 / 50</code></li>
  <li><strong>Sand</strong>: <code>(sandRatio / totalRatio) * volume</code></li>
  <li><strong>Aggregate</strong>: <code>(aggregateRatio / totalRatio) * volume</code></li>
  <li><strong>Steel</strong>: <code>0.0001 * volume * mixType</code> (in metric tons)</li>
</ul>

<h2>🛑 Input Validation</h2>
<ul>
  <li>Prevents invalid mix types and structure types</li>
  <li>Handles non-numeric inputs gracefully</li>
  <li>Rejects zero or negative dimensions</li>
</ul>

<h2>🙋‍♂️ Author</h2>
<p>
  <strong>Mayur Shankar Bhusare</strong><br>
  📧 <a href="mailto:mayurbhusare8262@gmail.com">mayurbhusare8262@gmail.com</a><br>
  🔗 
  <a href="https://www.linkedin.com/in/mayur-bhusare/" target="_blank" rel="noopener noreferrer">LinkedIn</a> | 
  <a href="https://bhusaremayur.github.io/portfolio/" target="_blank" rel="noopener noreferrer">Portfolio</a>
</p>

<h2>📝 License</h2>
<p>This project is open-source and free to use for educational and practical engineering purposes.</p>
