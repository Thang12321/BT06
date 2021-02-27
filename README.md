# BT_06
A2: Vòng đệ quy chạy vô tận vì n luôn giảm dần (n-1) mà không có điểm dừng

A3: Vòng đệ quy này cũng chạy vô tận vì khi gọi đệ quy (H(N)) mà không thay đổi N thì sẽ không chạy đến điều kiện dừng (N=1) để dừng vòng đệ quy

A4: Chương trình chạy quá lâu và không đưa ra kết quả vì với N lớn, vòng đệ quy phát sinh quá nhiều phép tính toán xếp chồng lên nhau, 
    bộ nhớ không xử lý được lượng dữ liệu quá lớn khiến chương trình không đưa ra được kết quả
    
A5: Sử dụng vòng lặp chạy nhanh hơn dùng đệ quy vì khi dùng vòng lặp thì sẽ bỏ qua được các phép toán trùng nhau so với dùng đệ quy

A6: Khi liên tục khai báo mảng có kích thước lớn trong hàm đệ quy, khi chạy đệ quy thì mảng đó vẫn được giữ lại trong bộ nhớ khi chạy những lần đệ quy sau,
    khiến cho bộ nhớ không đủ chỗ để chứa dữ liệu nhiều mảng kích thước lớn
