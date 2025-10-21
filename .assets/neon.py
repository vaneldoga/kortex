svg_content = """<?xml version="1.0" encoding="UTF-8"?>
<!--Define o tipo de arquivo XML -->
<svg xmlns="http://www.w3.org/2000/svg" width="1000" height="120" viewBox="0 0  1000 120" role="img" aria-label="Neon badge">
  <defs>
    <!-- Filtro Neon -->
    <filter id="neonGlow" x="-50%" y="-50%" width="200%" height="200%">
      <feGaussianBlur stdDeviation="6" result="blur1"/>
      <feMerge>
        <feMergeNode in="blur1"/>
        <feMergeNode in="blur1"/>
        <feMergeNode in="SourceGraphic"/>
      </feMerge>
    </filter>

    <! Cria o degrade na horizontal >
    <linearGradient id="grad" x1="0" x2="1" y1="0" y2="0">
      <stop offset="0%" stop-color="#ff4fff"/>
      <stop offset="100%" stop-color="#ff00ff"/>
    </linearGradient>
  </defs>

  <!-- background transparente  -->
  <rect width="100%" height="100%" fill="transparent"/>

  <!-- Texto principal com Brilho -->
  <g filter="url(#neonGlow)">
    <text x="20" y="80" 
          font-family="Segoe UI Emoji, system-ui, -apple-system, 'Segoe UI Symbol', 'Noto Color Emoji', 'DejaVu Sans', monospace"
          font-size="36" 
          font-weight="700" 
          fill="url(#grad)" 
          stroke="#ff66ff" 
          stroke-width="1.3"
          paint-order="stroke fill">

          <!-- Texto -->
        💾 /lista/parte n /resolucao-seunome/suas resolucoes
    </text>
  </g>

  <!-- Texto sobreposto para dar legibilidade -->
  <text x="20" y="80" 
        font-family="Segoe UI Emoji, system-ui, -apple-system, 'Segoe UI Symbol', 'Noto Color Emoji', 'DejaVu Sans', monospace"
        font-size="36" 
        font-weight="700" 
        fill="#ffffff" 
        fill-opacity="0.80">

        <!-- Texto -->
        💾 /lista/parte n /resolucao-seunome/suas resolucoes
  </text>
</svg>
"""

# Salva o Arquivo na pasta assets/ com o nome neon.svg
file_path = "assets/neon.svg"
with open(file_path, "w", encoding="utf-8") as f:
    f.write(svg_content)

