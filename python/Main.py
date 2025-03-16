# File: elektronik.py
class Elektronik:
    def __init__(self, merk, tahun_produksi, harga):
        self.merk = merk
        self.tahun_produksi = tahun_produksi
        self.harga = harga

    def get_merk(self):
        return self.merk

    def set_merk(self, merk):
        self.merk = merk

    def get_tahun_produksi(self):
        return self.tahun_produksi

    def set_tahun_produksi(self, tahun_produksi):
        self.tahun_produksi = tahun_produksi

    def get_harga(self):
        return self.harga

    def set_harga(self, harga):
        self.harga = harga

    def display_info(self):
        print(f"Merk: {self.merk}")
        print(f"Tahun Produksi: {self.tahun_produksi}")
        print(f"Harga: {self.harga}")

# File: komponen.py
from elektronik import Elektronik

class Komponen(Elektronik):
    def __init__(self, merk, tahun_produksi, harga, kode, tipe):
        super().__init__(merk, tahun_produksi, harga)
        self.kode = kode
        self.tipe = tipe

    def get_kode(self):
        return self.kode

    def set_kode(self, kode):
        self.kode = kode

    def get_tipe(self):
        return self.tipe

    def set_tipe(self, tipe):
        self.tipe = tipe

    def display_info(self):
        super().display_info()
        print(f"Kode: {self.kode}")
        print(f"Tipe: {self.tipe}")

# File: cpu.py
from komponen import Komponen

class Cpu(Komponen):
    def __init__(self, merk, tahun_produksi, harga, kode, tipe, kecepatan_ghz, jumlah_core, socket):
        super().__init__(merk, tahun_produksi, harga, kode, tipe)
        self.kecepatan_ghz = kecepatan_ghz
        self.jumlah_core = jumlah_core
        self.socket = socket

    def get_kecepatan_ghz(self):
        return self.kecepatan_ghz

    def set_kecepatan_ghz(self, kecepatan_ghz):
        self.kecepatan_ghz = kecepatan_ghz

    def get_jumlah_core(self):
        return self.jumlah_core

    def set_jumlah_core(self, jumlah_core):
        self.jumlah_core = jumlah_core

    def get_socket(self):
        return self.socket

    def set_socket(self, socket):
        self.socket = socket

    def calculate_performance(self):
        return self.kecepatan_ghz * self.jumlah_core

    def display_info(self):
        super().display_info()
        print(f"Kecepatan GHz: {self.kecepatan_ghz}")
        print(f"Jumlah Core: {self.jumlah_core}")
        print(f"Socket: {self.socket}")

# File: ram.py
from komponen import Komponen

class Ram(Komponen):
    def __init__(self, merk, tahun_produksi, harga, kode, tipe, kapasitas_gb, jenis_memori, speed_mhz):
        super().__init__(merk, tahun_produksi, harga, kode, tipe)
        self.kapasitas_gb = kapasitas_gb
        self.jenis_memori = jenis_memori
        self.speed_mhz = speed_mhz

    def get_kapasitas_gb(self):
        return self.kapasitas_gb

    def set_kapasitas_gb(self, kapasitas_gb):
        self.kapasitas_gb = kapasitas_gb

    def get_jenis_memori(self):
        return self.jenis_memori

    def set_jenis_memori(self, jenis_memori):
        self.jenis_memori = jenis_memori

    def get_speed_mhz(self):
        return self.speed_mhz

    def set_speed_mhz(self, speed_mhz):
        self.speed_mhz = speed_mhz

    def calculate_performance(self):
        return self.kapasitas_gb * self.speed_mhz

    def display_info(self):
        super().display_info()
        print(f"Kapasitas GB: {self.kapasitas_gb}")
        print(f"Jenis Memori: {self.jenis_memori}")
        print(f"Speed MHz: {self.speed_mhz}")

# File: harddrive.py
from komponen import Komponen

class Harddrive(Komponen):
    def __init__(self, merk, tahun_produksi, harga, kode, tipe, kapasitas_gb, tipe_storage, read_speed_mbps, write_speed_mbps):
        super().__init__(merk, tahun_produksi, harga, kode, tipe)
        self.kapasitas_gb = kapasitas_gb
        self.tipe_storage = tipe_storage
        self.read_speed_mbps = read_speed_mbps
        self.write_speed_mbps = write_speed_mbps

    def get_kapasitas_gb(self):
        return self.kapasitas_gb

    def set_kapasitas_gb(self, kapasitas_gb):
        self.kapasitas_gb = kapasitas_gb

    def get_tipe_storage(self):
        return self.tipe_storage

    def set_tipe_storage(self, tipe_storage):
        self.tipe_storage = tipe_storage

    def get_read_speed_mbps(self):
        return self.read_speed_mbps

    def set_read_speed_mbps(self, read_speed_mbps):
        self.read_speed_mbps = read_speed_mbps

    def get_write_speed_mbps(self):
        return self.write_speed_mbps

    def set_write_speed_mbps(self, write_speed_mbps):
        self.write_speed_mbps = write_speed_mbps

    def calculate_performance(self):
        return (self.read_speed_mbps + self.write_speed_mbps) / 2.0

    def display_info(self):
        super().display_info()
        print(f"Kapasitas GB: {self.kapasitas_gb}")
        print(f"Tipe Storage: {self.tipe_storage}")
        print(f"Read Speed MBps: {self.read_speed_mbps}")
        print(f"Write Speed MBps: {self.write_speed_mbps}")

# File: gaming_cpu.py
from cpu import Cpu

class GamingCpu(Cpu):
    def __init__(self, merk, tahun_produksi, harga, kode, tipe, kecepatan_ghz, jumlah_core, socket, rgb_lighting, cooling_system):
        super().__init__(merk, tahun_produksi, harga, kode, tipe, kecepatan_ghz, jumlah_core, socket)
        self.rgb_lighting = rgb_lighting
        self.cooling_system = cooling_system

    def is_rgb_lighting(self):
        return self.rgb_lighting

    def set_rgb_lighting(self, rgb_lighting):
        self.rgb_lighting = rgb_lighting

    def get_cooling_system(self):
        return self.cooling_system

    def set_cooling_system(self, cooling_system):
        self.cooling_system = cooling_system

    def boost_performance(self):
        return self.calculate_performance() * 1.2  # 20% boost

    def display_info(self):
        super().display_info()
        print(f"RGB Lighting: {self.rgb_lighting}")
        print(f"Cooling System: {self.cooling_system}")

# File: ssd_drive.py
from harddrive import Harddrive

class SsdDrive(Harddrive):
    def __init__(self, merk, tahun_produksi, harga, kode, tipe, kapasitas_gb, tipe_storage, read_speed_mbps, write_speed_mbps, nvme_gen, has_dram):
        super().__init__(merk, tahun_produksi, harga, kode, tipe, kapasitas_gb, tipe_storage, read_speed_mbps, write_speed_mbps)
        self.nvme_gen = nvme_gen
        self.has_dram = has_dram

    def get_nvme_gen(self):
        return self.nvme_gen

    def set_nvme_gen(self, nvme_gen):
        self.nvme_gen = nvme_gen

    def get_has_dram(self):
        return self.has_dram

    def set_has_dram(self, has_dram):
        self.has_dram = has_dram

    def calculate_iops(self):
        return int(self.calculate_performance() * 1000)  # Dummy calculation

    def display_info(self):
        super().display_info()
        print(f"NVMe Gen: {self.nvme_gen}")
        print(f"Has DRAM: {self.has_dram}")

# File: komputer.py
class Komputer:
    def __init__(self, nama, tipe):
        self.nama = nama
        self.tipe = tipe
        self.cpu_list = [None]  # Assuming only one CPU
        self.ram_list = [None, None]  # Assuming two RAM sticks
        self.harddrive_list = [None]  # Assuming one hard drive
        self.total_harga = 0.0

    def get_nama(self):
        return self.nama

    def set_nama(self, nama):
        self.nama = nama

    def get_tipe(self):
        return self.tipe

    def set_tipe(self, tipe):
        self.tipe = tipe

    def add_cpu(self, cpu):
        self.cpu_list[0] = cpu
        self.total_harga += cpu.get_harga()

    def add_ram(self, ram):
        for i in range(len(self.ram_list)):
            if self.ram_list[i] is None:
                self.ram_list[i] = ram
                self.total_harga += ram.get_harga()
                break

    def add_harddrive(self, harddrive):
        self.harddrive_list[0] = harddrive
        self.total_harga += harddrive.get_harga()

    def calculate_total_price(self):
        return self.total_harga

    def calculate_performance_score(self):
        cpu_score = self.cpu_list[0].calculate_performance()
        ram_score = 0
        for ram in self.ram_list:
            if ram is not None:
                ram_score += ram.calculate_performance()
        hdd_score = self.harddrive_list[0].calculate_performance()
        return cpu_score + ram_score + hdd_score

    def display_system_info(self):
        print(f"Nama Komputer: {self.nama}")
        print(f"Tipe: {self.tipe}")
        print(f"Total Harga: {self.total_harga}")
        print(f"Performance Score: {self.calculate_performance_score()}")
        print("CPU Info:")
        self.cpu_list[0].display_info()
        print("RAM Info:")
        for ram in self.ram_list:
            if ram is not None:
                ram.display_info()
        print("Harddrive Info:")
        self.harddrive_list[0].display_info()

# File: main.py
from cpu import Cpu
from ram import Ram
from harddrive import Harddrive
from komputer import Komputer

if __name__ == "__main__":
    cpu = Cpu("Intel", 2022, 3000000, "CPU001", "Desktop", 3.5, 8, "LGA1200")
    ram1 = Ram("Corsair", 2022, 1500000, "RAM001", "DDR4", 16, "DDR4", 3200)
    ram2 = Ram("Corsair", 2022, 1500000, "RAM002", "DDR4", 16, "DDR4", 3200)
    hdd = Harddrive("Seagate", 2022, 1000000, "HDD001", "HDD", 1000, "SATA", 200, 180)

    komputer = Komputer("Gaming PC", "Desktop")
    komputer.add_cpu(cpu)
    komputer.add_ram(ram1)
    komputer.add_ram(ram2)
    komputer.add_harddrive(hdd)

    komputer.display_system_info()
