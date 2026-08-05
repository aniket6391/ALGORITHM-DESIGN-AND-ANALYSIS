$repo = "C:\Users\asus\Desktop\LPU\3rd_Sem\CAP538ALGORITHM DESIGN AND ANALYSIS\Practical"

Set-Location $repo

Write-Host "Auto Git Push Started..."
Write-Host "Watching: $repo"

while ($true) {

    $status = git status --porcelain

    if ($status) {
        Write-Host "Changes detected..."

        git add .

        git commit -m "Auto Update $(Get-Date -Format 'yyyy-MM-dd HH:mm:ss')" 2>$null

        git push

        Write-Host "Push completed!"
    }

    Start-Sleep -Seconds 5
}