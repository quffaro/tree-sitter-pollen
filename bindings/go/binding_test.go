package tree_sitter_pollen_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_pollen "github.com/tree-sitter/tree-sitter-pollen/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_pollen.Language())
	if language == nil {
		t.Errorf("Error loading Pollen grammar")
	}
}
