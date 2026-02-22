
import os

def tao_thu_muc_tu_dong():
	so_thu_muc = int(input("Nhập số thư mục cần tạo: "))
	for i in range(1, so_thu_muc + 1):
		ten_thu_muc = f"bai_{i}"
		try:
			os.makedirs(ten_thu_muc, exist_ok=True)
			print(f"Đã tạo thư mục: {ten_thu_muc}")
		except Exception as e:
			print(f"Lỗi khi tạo thư mục {ten_thu_muc}: {e}")

if __name__ == "__main__":
	tao_thu_muc_tu_dong()
