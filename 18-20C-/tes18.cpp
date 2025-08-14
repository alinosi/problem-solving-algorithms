



// Adjacency List (vector<vector<Edge>> adj)
    // Menyimpan semua tetangga dari setiap vertex beserta bobotnya.
    // Kalau cuma pakai array 2D untuk graf kecil memang bisa, tapi untuk graf besar adjacency list jauh lebih efisien.

// Priority Queue (priority_queue<...> pq)
    // Untuk mengambil vertex dengan jarak terkecil secara cepat di setiap iterasi.
    // Kalau cuma pakai array, kita harus mencari manual dengan loop, yang membuat kompleksitas naik.

// Visited array (vector<bool> visited)
    // Menandai node yang jaraknya sudah final, supaya tidak diproses lagi.

// Distance array (vector<int> dist)
    // Menyimpan jarak terpendek dari sumber ke setiap vertex.

// Previous array (vector<int> prev)
    // Menyimpan jalur yang dilewati untuk sampai ke node tertentu (rekonstruksi path).