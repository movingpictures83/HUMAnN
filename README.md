# HUMAnN
# Language: C++ (Partially generated by PluGen)
# Input: FASTQ (sequence data)
# Output: prefix
# Tested with: PluMA 1.1, GCC 4.8.4
# Dependency: HUMAnN 2 (https://huttenhower.sph.harvard.edu/humann)

PluMA plugin that will takes sequence data and produces a functional
profile using HUMAnN 2 (Franzosa et al, 2018).

The plugin requires the executable of HUMAnN 2.0 (humann2) to be in the 
system PATH, as well as the lead script of MetaPhlAn3 (metaphlan.py, this
is a dependency of HUMAnN)

Three output files will be generated, using the provided output prefix:
(prefix)_genefamiles.tsv
(prefix)_pathabundance.tsv
(prefix)_pathcoverage.tsv

Note: demo.fastq (in the example/ directory) is from the HumanN repository
(available here: https://huttenhower.sph.harvard.edu/humann)
